 // eostest.cpp : Defines the entry point for the console application.  
 //  
 #include "stdafx.h"  
 #include "eosmylib.h"  
 #include <iostream>  
 #include <string>  
 int _tmain(int argc, _TCHAR* argv[])  
 {  
      EdsError err = EDS_ERR_OK;  
      EdsCameraRef camera = NULL;  
      int CameraIndex = 0;  
      EdsCameraListRef cameraList = NULL;  
      bool isSDKloaded;  
      try {  
           // Initialize SDK  
           err = EdsInitializeSDK();  
           if (err != EDS_ERR_OK) throw err;  
           isSDKloaded = true;  
           // Get camera list  
           err = EdsGetCameraList(&cameraList);  
           eoscam a = eoscam(cameraList, 0);  
           // Open session with camera  
           err = a.getAv();  
           err = a.getTv();  
           err = a.getISO();  
           err = a.getAEMode();  
           err = a.getAvDesc();  
           err = a.getTvDesc();  
           err = a.getISODesc();  
           std::cout << "available Tv setting values:" << std::endl;  
           for (EdsInt32 iii = 0; iii < a.tvd->numElements; iii++)  
                std::cout << sysinfo::gettvname(a.tvd->propDesc[iii]) << "\t";  
           if (a.tvd->numElements != 0) std::cout << std::endl;  
           std::cout << std::endl;  
           std::cout << "available Av setting values:" << std::endl;  
           for (EdsInt32 iii = 0; iii < a.avd->numElements; iii++)  
                std::cout << sysinfo::getavname(a.avd->propDesc[iii]) << "\t";  
           if (a.avd->numElements != 0) std::cout << std::endl;  
           std::cout << std::endl;  
           std::cout << "available ISO setting values:" << std::endl;  
           for (EdsInt32 iii = 0; iii < a.isod->numElements; iii++)  
                std::cout << sysinfo::getisoname(a.isod->propDesc[iii]) << "\t";  
           if (a.isod->numElements != 0) std::cout << std::endl;  
           std::cout << std::endl;  
           std::cout << "Aperture:\t" << sysinfo::getavname(a.Av) << std::endl;  
           std::cout << "Shutter speed:\t" << sysinfo::gettvname(a.Tv) << std::endl;  
           std::cout << "ISO:\t\t" << sysinfo::getisoname(a.ISO) << std::endl;  
           std::cout << "AE MODE:\t" << sysinfo::getaemodename(a.AEMode) << std::endl;  
           for (int jj = 1; jj < 2; jj++) {  
                std::cout << jj << std::endl;  
                err = a.takePicture();  
                if (err != EDS_ERR_OK) std::cout << err;  
                Sleep(5000);  
           }  
      }  
      catch (int e){  
           switch (e)  
           {  
           case 0:  
                ;  
           default:  
                ;  
           }  
      }  
      // Terminate SDK  
      if (isSDKloaded) EdsTerminateSDK();  
      return 0;  
 }  
