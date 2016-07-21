#include <string>  
 #include "EDSDKErrors.h"  
 #include "EDSDKTypes.h"  
 #include "EDSDK.h"  
 class sysinfo {  
 public:  
      struct pair {  
           EdsUInt32 key;  
           std::string name;  
      };  
      static const pair drivemode[];  
      static const pair afmode[];  
      static const pair aemode[];  
      static const pair iso[];  
      static const pair av[];  
      static const pair tv[];  
      static const pair exposurecompensation[];  
      static const EdsUInt32 drivemode_n;  
      static const EdsUInt32 afmode_n;  
      static const EdsUInt32 aemode_n;  
      static const EdsUInt32 iso_n;  
      static const EdsUInt32 av_n;  
      static const EdsUInt32 tv_n;  
      static const EdsUInt32 exposurecompensation_n;  
      static std::string getdrivemodename(EdsUInt32 drivemode2) {  
           bool keyisfound = false;  
           EdsUInt32 j;  
           for (j = 0; j < drivemode_n; j++) {  
                if (sysinfo::drivemode[j].key == drivemode2) {  
                     keyisfound = true;  
                     break;  
                }  
           }  
           if (keyisfound == true) {  
                return sysinfo::drivemode[j].name;  
           }  
           else {  
                return "????";  
           }  
      }  
      static std::string getafmodename(EdsUInt32 afmode2) {  
           bool keyisfound = false;  
           EdsUInt32 j;  
           for (j = 0; j < afmode_n; j++) {  
                if (sysinfo::afmode[j].key == afmode2) {  
                     keyisfound = true;  
                     break;  
                }  
           }  
           if (keyisfound == true) {  
                return sysinfo::afmode[j].name;  
           }  
           else {  
                return "????";  
           }  
      }  
      static std::string getaemodename(EdsUInt32 aemode2) {  
           bool keyisfound = false;  
           EdsUInt32 j;  
           for (j = 0; j < aemode_n; j++) {  
                if (sysinfo::aemode[j].key == aemode2) {  
                     keyisfound = true;  
                     break;  
                }  
           }  
           if (keyisfound == true) {  
                return sysinfo::aemode[j].name;  
           }  
           else {  
                return "????";  
           }  
      }  
      static std::string getisoname(EdsUInt32 iso2) {  
           bool keyisfound = false;  
           EdsUInt32 j;  
           for (j = 0; j < iso_n; j++) {  
                if (sysinfo::iso[j].key == iso2) {  
                     keyisfound = true;  
                     break;  
                }  
           }  
           if (keyisfound == true) {  
                return sysinfo::iso[j].name;  
           }  
           else {  
                return "????";  
           }  
      }  
      static std::string getavname(EdsUInt32 av2) {  
           bool keyisfound = false;  
           EdsUInt32 j;  
           for (j = 0; j < av_n; j++) {  
                if (sysinfo::av[j].key == av2) {  
                     keyisfound = true;  
                     break;  
                }  
           }  
           if (keyisfound == true) {  
                return sysinfo::av[j].name;  
           }  
           else {  
                return "????";  
           }  
      }  
      static std::string gettvname(EdsUInt32 tv2) {  
           bool keyisfound = false;  
           EdsUInt32 j;  
           for (j = 0; j < tv_n; j++) {  
                if (sysinfo::tv[j].key == tv2) {  
                     keyisfound = true;  
                     break;  
                }  
           }  
           if (keyisfound == true) {  
                return sysinfo::tv[j].name;  
           }  
           else {  
                return "????";  
           }  
      }  
      static std::string getexposurecompensationname(EdsUInt32 exposurecompensation2) {  
           bool keyisfound = false;  
           EdsUInt32 j;  
           for (j = 0; j < exposurecompensation_n; j++) {  
                if (sysinfo::exposurecompensation[j].key == exposurecompensation2) {  
                     keyisfound = true;  
                     break;  
                }  
           }  
           if (keyisfound == true) {  
                return sysinfo::exposurecompensation[j].name;  
           }  
           else {  
                return "????";  
           }  
      }  
 };  
 const sysinfo::pair sysinfo::drivemode[] = {  
      { 0, "single-frame shooting" }, { 1, "continuous shooting" },  
      { 2, "video" }, { 4, "high-speed continuous shooting" },  
      { 5, "low-speed continuous shooting" }, { 6, "silent single shooting" },  
      { 7, "10-sec self-timer plus continuous shots" }, { 10, "10-sec self-timer" },  
      { 11, "2-sec self-timer" } };  
 const EdsUInt32 sysinfo::drivemode_n = 9;  
 const sysinfo::pair sysinfo::afmode[] = {  
      { 0, "one-shot af" }, { 1, "ai servo af" },  
      { 2, "ai focus af" }, { 3, "manual focus" }, { 4294967295, "N/A" } };  
 const EdsUInt32 sysinfo::afmode_n = 5;  
 const sysinfo::pair sysinfo::aemode[] = { { 0, "program ae" },  
 { 1, "shutter-speed priority ae" }, { 2, "aperture priority ae" },  
 { 3, "manual exposure" }, { 4, "bulb" }, { 5, "auto depth-of-field ae" },  
 { 6, "depth-of-field ae" }, { 7, "camera settings registered" }, { 8, "lock" },  
 { 9, "auto" }, { 10, "night scene portrait" }, { 11, "sports" },  
 { 12, "portrait" }, { 13, "landscape" }, { 14, "close-Up" }, { 15, "flash off" },  
 { 19, "creative auto" }, { 20, "movies" }, { 21, "photo in movie" },  
 { 22, "scene intelligent auto" }, { 23, "night scenes" }, { 24, "backlit Scenes" },  
 { 26, "children" }, { 27, "food" }, { 28, "candlelight portraits" },  
 { 4294967295, "N/A" } };  
 const EdsUInt32 sysinfo::aemode_n = 26;  
 const sysinfo::pair sysinfo::iso[] = {  
      { 0, "auto" }, { 72, "100" }, { 80, "200" }, { 88, "400" }, { 96, "800" }, { 104, "1600" }, { 112, "3200" }, { 120, "6400" }, { 128, "12800" } };  
 const EdsUInt32 sysinfo::iso_n = 9;  
 const sysinfo::pair sysinfo::av[] = {  
      { 32, "2.8" }, { 35, "3.2" }, { 37, "3.5 (1/3)" }, { 40, "4" },  
      { 43, "4.5" }, { 44, "4.5" }, { 45, "5.0" }, { 48, "5.6" }, { 51, "6.3" },  
      { 53, "7.1" }, { 56, "8" }, { 59, "9" }, { 61, "10" }, { 64, "11" },  
      { 67, "13 (1/3)" }, { 69, "14" }, { 72, "16" }, { 75, "18" },  
      { 77, "20" }, { 80, "22" }, { 83, "25" }, { 85, "29" }, { 88, "32" },  
      { 91, "36" } };  
 const EdsUInt32 sysinfo::av_n = 27;  
 const sysinfo::pair sysinfo::tv[] = {  
      { 12, "Bulb" }, { 16, "30\"" }, { 19, "25\"" }, { 20, "20\"" }, { 21, "20\" (1/3)" },  
      { 24, "15\"" }, { 27, "13\"" }, { 28, "10\"" }, { 29, "10\" (1/3)" }, { 32, "8\"" },  
      { 35, "6\" (1/3)" }, { 36, "6\"" }, { 37, "5\"" }, { 40, "4\"" }, { 43, "3\"2" },  
      { 44, "3\"" }, { 45, "2\"5" }, { 48, "2\"" }, { 51, "1\"6" }, { 52, "1\"5" },  
      { 53, "1\"3" }, { 56, "1\"" }, { 59, "0\"8" }, { 60, "0\"7" }, { 61, "0\"6" },  
      { 64, "0\"5" }, { 67, "0\"4" }, { 68, "0\"3" }, { 69, "0\"3 (1/3)" }, { 72, "1/4" },  
      { 75, "1/5" }, { 76, "1/6" }, { 77, "1/6 (1/3)" }, { 80, "1/8" }, { 83, "1/10 (1/3)" },  
      { 84, "1/10" }, { 85, "1/13" }, { 88, "1/15" }, { 91, "1/20 (1/3)" }, { 92, "1/20" },  
      { 93, "1/25" }, { 96, "1/30" }, { 99, "1/40" }, { 100, "1/45" }, { 101, "1/50" },  
      { 104, "1/60" }, { 107, "1/80" }, { 108, "1/90" }, { 109, "1/100" }, { 112, "1/125" },  
      { 115, "1/160" }, { 116, "1/180" }, { 117, "1/200" }, { 120, "1/250" }, { 123, "1/320" },  
      { 124, "1/350" }, { 125, "1/400" }, { 128, "1/500" }, { 131, "1/640" }, { 132, "1/750" },  
      { 133, "1/800" }, { 136, "1/1000" }, { 139, "1/1250" }, { 140, "1/1500" }, { 141, "1/1600" },  
      { 144, "1/2000" }, { 147, "1/2500" }, { 148, "1/3000" }, { 149, "1/3200" }, { 152, "1/4000" },  
      { 155, "1/5000" }, { 156, "1/6000" }, { 157, "1/6400" }, { 160, "1/8000" }, { 4294967295, "N/A" } };  
 const EdsUInt32 sysinfo::tv_n = 75;  
 const sysinfo::pair sysinfo::exposurecompensation[] = {  
      { 24, "+3" }, { 21, "+2 2/3" }, { 20, "+2 1/2" }, { 19, "+2 1/3" },  
      { 16, "+2" }, { 13, "+1 2/3" }, { 12, "+1 1/2" }, { 11, "+1 1/3" },  
      { 8, "+1" }, { 5, "+2/3" }, { 4, "+1/2" }, { 3, "+1/3" },  
      { 0, "0" }, { 253, "-1/3" }, { 252, "-1/2" }, { 251, "-2/3" },  
      { 248, "-1" }, { 245, "-1 1/3" }, { 244, "-1 1/2" }, { 243, "-1 2/3" },  
      { 240, "-2" }, { 237, "-2 1/3" }, { 236, "-2 1/2" }, { 235, "-2 2/3" },  
      { 232, "-3" }, { 4294967295, "N/A" } };  
 const EdsUInt32 sysinfo::exposurecompensation_n = 26;  
 class eoscam {  
 public:  
      EdsPropertyDesc * tvd;  
      EdsPropertyDesc * avd;  
      EdsPropertyDesc * isod;  
      EdsUInt32 Tv, Av, ISO, AFMode, AEMode, DriveMode, MeteringMode, ExposureCompensation;  
      explicit eoscam(EdsCameraListRef camlist, EdsUInt32 index) {  
           EdsError err = EDS_ERR_OK;  
           EdsUInt32 ind2;  
           isInitializationOK = false;  
           isSessionOpened = false;  
           // get the number of cameras  
           err = EdsGetChildCount(camlist, &ind2);  
           if (ind2 < index + 1) { return; }  
           // get the desired camera  
           err = EdsGetChildAtIndex(camlist, index, &cam);  
           // label the initialization as successful  
           if (err == EDS_ERR_OK) {  
                isInitializationOK = true;  
                tvd = new EdsPropertyDesc;  
                avd = new EdsPropertyDesc;  
                isod = new EdsPropertyDesc;  
           }  
           else {  
                tvd = NULL;  
                avd = NULL;  
                isod = NULL;  
           }  
           return;  
      }  
      ~eoscam() {  
           EdsError err = EDS_ERR_OK;  
           if (isInitializationOK) {  
                if (isSessionOpened) { err = CloseSession(); }  
                EdsRelease(cam);  
                delete tvd;  
                delete avd;  
                delete isod;  
           }  
      }  
      EdsError getTvDesc()  
      {  
           EdsError err = EDS_ERR_OK;  
           if (!isSessionOpened) { err = OpenSession(); }  
           if (err == EDS_ERR_OK) { err = EdsGetPropertyDesc(cam, kEdsPropID_Tv, tvd); }  
           return err;  
      }  
      EdsError getAvDesc()  
      {  
           EdsError err = EDS_ERR_OK;  
           if (!isSessionOpened) { err = OpenSession(); }  
           if (err == EDS_ERR_OK) { err = EdsGetPropertyDesc(cam, kEdsPropID_Av, avd); }  
           return err;  
      }  
      EdsError getISODesc()  
      {  
           EdsError err = EDS_ERR_OK;  
           if (!isSessionOpened) { err = OpenSession(); }  
           if (err == EDS_ERR_OK) { err = EdsGetPropertyDesc(cam, kEdsPropID_ISOSpeed, isod); }  
           return err;  
      }  
      EdsError getTv()  
      {  
           EdsError err = EDS_ERR_OK;  
           if (!isSessionOpened) { err = OpenSession(); }  
           if (err == EDS_ERR_OK) {  
                err = EdsGetPropertyData(cam, kEdsPropID_Tv, 0, sizeof(EdsUInt32), &Tv);  
           }  
           return err;  
      }  
      EdsError getAv()  
      {  
           EdsError err = EDS_ERR_OK;  
           if (!isSessionOpened) { err = OpenSession(); }  
           if (err == EDS_ERR_OK) {  
                err = EdsGetPropertyData(cam, kEdsPropID_Av, 0, sizeof(EdsUInt32), &Av);  
           }  
           return err;  
      }  
      EdsError getISO()  
      {  
           EdsError err = EDS_ERR_OK;  
           if (!isSessionOpened) { err = OpenSession(); }  
           if (err == EDS_ERR_OK) {  
                err = EdsGetPropertyData(cam, kEdsPropID_ISOSpeed, 0, sizeof(EdsUInt32), &ISO);  
           }  
           return err;  
      }  
      EdsError getAFMode()  
      {  
           EdsError err = EDS_ERR_OK;  
           if (!isSessionOpened) { err = OpenSession(); }  
           if (err == EDS_ERR_OK) {  
                err = EdsGetPropertyData(cam, kEdsPropID_AFMode, 0, sizeof(EdsUInt32), &AFMode);  
           }  
           return err;  
      }  
      EdsError getAEMode()  
      {  
           EdsError err = EDS_ERR_OK;  
           if (!isSessionOpened) { err = OpenSession(); }  
           if (err == EDS_ERR_OK) {  
                err = EdsGetPropertyData(cam, kEdsPropID_AEMode, 0, sizeof(EdsUInt32), &AEMode);  
           }  
           return err;  
      }  
      EdsError getDriveMode()  
      {  
           EdsError err = EDS_ERR_OK;  
           if (!isSessionOpened) { err = OpenSession(); }  
           if (err == EDS_ERR_OK) {  
                err = EdsGetPropertyData(cam, kEdsPropID_DriveMode, 0, sizeof(EdsUInt32), &DriveMode);  
           }  
           return err;  
      }  
      EdsError getMeteringMode()  
      {  
           EdsError err = EDS_ERR_OK;  
           if (!isSessionOpened) { err = OpenSession(); }  
           if (err == EDS_ERR_OK) {  
                err = EdsGetPropertyData(cam, kEdsPropID_MeteringMode, 0, sizeof(EdsUInt32), &MeteringMode);  
           }  
           return err;  
      }  
      EdsError getExposureCompensation()  
      {  
           EdsError err = EDS_ERR_OK;  
           if (!isSessionOpened) { err = OpenSession(); }  
           if (err == EDS_ERR_OK) {  
                err = EdsGetPropertyData(cam, kEdsPropID_ExposureCompensation, 0, sizeof(EdsUInt32), &ExposureCompensation);  
           }  
           return err;  
      }  
      EdsError setTv(EdsUInt32 * Tv)  
      {  
           EdsError err = EDS_ERR_OK;  
           if (!isSessionOpened) { err = OpenSession(); }  
           if (err == EDS_ERR_OK) {  
                err = EdsSetPropertyData(cam, kEdsPropID_Tv, 0, sizeof(EdsUInt32), Tv);  
           }  
           return err;  
      }  
      EdsError setAv(EdsUInt32 * Av)  
      {  
           EdsError err = EDS_ERR_OK;  
           if (!isSessionOpened) { err = OpenSession(); }  
           if (err == EDS_ERR_OK) {  
                err = EdsSetPropertyData(cam, kEdsPropID_Av, 0, sizeof(EdsUInt32), Av);  
           }  
           return err;  
      }  
      EdsError setISO(EdsUInt32 * ISO)  
      {  
           EdsError err = EDS_ERR_OK;  
           if (!isSessionOpened) { err = OpenSession(); }  
           if (err == EDS_ERR_OK) {  
                err = EdsSetPropertyData(cam, kEdsPropID_ISOSpeed, 0, sizeof(EdsUInt32), ISO);  
           }  
           return err;  
      }  
      EdsError setAFMode(EdsUInt32 * AFMode)  
      {  
           EdsError err = EDS_ERR_OK;  
           if (!isSessionOpened) { err = OpenSession(); }  
           if (err == EDS_ERR_OK) {  
                err = EdsSetPropertyData(cam, kEdsPropID_AFMode, 0, sizeof(EdsUInt32), AFMode);  
           }  
           return err;  
      }  
      EdsError setDriveMode(EdsUInt32 * DriveMode)  
      {  
           EdsError err = EDS_ERR_OK;  
           if (!isSessionOpened) { err = OpenSession(); }  
           if (err == EDS_ERR_OK) {  
                err = EdsSetPropertyData(cam, kEdsPropID_DriveMode, 0, sizeof(EdsUInt32), DriveMode);  
           }  
           return err;  
      }  
      EdsError setMeteringMode(EdsUInt32 * MeteringMode)  
      {  
           EdsError err = EDS_ERR_OK;  
           if (!isSessionOpened) { err = OpenSession(); }  
           if (err == EDS_ERR_OK) {  
                err = EdsSetPropertyData(cam, kEdsPropID_MeteringMode, 0, sizeof(EdsUInt32), MeteringMode);  
           }  
           return err;  
      }  
      EdsError setExposureCompensation(EdsUInt32 * ExposureCompensation)  
      {  
           EdsError err = EDS_ERR_OK;  
           if (!isSessionOpened) { err = OpenSession(); }  
           if (err == EDS_ERR_OK) {  
                err = EdsSetPropertyData(cam, kEdsPropID_ExposureCompensation, 0, sizeof(EdsUInt32), ExposureCompensation);  
           }  
           return err;  
      }  
      EdsError takePicture()  
      {  
           EdsError err = EDS_ERR_OK;  
           if (!isSessionOpened) { err = OpenSession(); }  
           if (err == EDS_ERR_OK) {  
                err = EdsSendCommand(cam, kEdsCameraCommand_TakePicture, 0);  
           }  
           return err;  
      }  
      EdsError Shutter_Halfway_NonAF()  
      {  
           EdsError err = EDS_ERR_OK;  
           if (!isSessionOpened) { err = OpenSession(); }  
           if (err == EDS_ERR_OK) {  
                err = EdsSendCommand(cam, kEdsCameraCommand_PressShutterButton, kEdsCameraCommand_ShutterButton_Halfway_NonAF);  
           }  
           return err;  
      }  
      EdsError Shutter_Complete_NonAF()  
      {  
           EdsError err = EDS_ERR_OK;  
           if (!isSessionOpened) { err = OpenSession(); }  
           if (err == EDS_ERR_OK) {  
                err = EdsSendCommand(cam, kEdsCameraCommand_PressShutterButton, kEdsCameraCommand_ShutterButton_Completely_NonAF);  
           }  
           return err;  
      }  
      EdsError Shutter_Halfway_AF()  
      {  
           EdsError err = EDS_ERR_OK;  
           if (!isSessionOpened) { err = OpenSession(); }  
           if (err == EDS_ERR_OK) {  
                err = EdsSendCommand(cam, kEdsCameraCommand_PressShutterButton, kEdsCameraCommand_ShutterButton_Halfway);  
           }  
           return err;  
      }  
      EdsError Shutter_Complete_AF()  
      {  
           EdsError err = EDS_ERR_OK;  
           if (!isSessionOpened) { err = OpenSession(); }  
           if (err == EDS_ERR_OK) {  
                err = EdsSendCommand(cam, kEdsCameraCommand_PressShutterButton, kEdsCameraCommand_ShutterButton_Completely);  
           }  
           return err;  
      }  
      EdsError Shutter_Off()  
      {  
           EdsError err = EDS_ERR_OK;  
           if (!isSessionOpened) { err = OpenSession(); }  
           if (err == EDS_ERR_OK) {  
                err = EdsSendCommand(cam, kEdsCameraCommand_PressShutterButton, kEdsCameraCommand_ShutterButton_OFF);  
           }  
           return err;  
      }  
 private:  
      bool isSessionOpened;  
      bool isInitializationOK;  
      EdsCameraRef cam;  
      EdsError OpenSession()  
      {  
           EdsError err = EDS_ERR_OK;  
           if (isInitializationOK) {  
                err = EdsOpenSession(cam);  
                if (err == EDS_ERR_OK) isSessionOpened = true;  
           }  
           return err;  
      }  
      EdsError CloseSession()  
      {  
           EdsError err = EDS_ERR_OK;  
           if (isInitializationOK) {  
                if (isSessionOpened)  
                     err = EdsCloseSession(cam);  
                if (err == EDS_ERR_OK) isSessionOpened = false;  
           }  
           return err;  
      }  
 };  
