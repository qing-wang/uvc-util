//
//  uvc-util.h
//  uvc-util
//
//  Created by Chien-Hsing Wang on 2023/9/26.
//  Copyright © 2023 IT-NSS University of Delaware. All rights reserved.
//

#ifndef uvc_util_h
#define uvc_util_h

struct UVCUtilValue
{
    char minimum[512];
    char maximum[512];
    char stepSize[512];
    char defaultValue[512];
    char currentValue[512];
};

int UVCUtilFindDeviceIndexByName(const char *deviceName);
int UVCUtilGetControllSummary(int deviceIndex, const char *controlName, struct UVCUtilValue* summary);
int UVCUtilGetControlValue(int deviceIndex, const char *controlName, char *valueBuf);
int UVCUtilSetControlValue(int deviceIndex, const char *controlName, char *valuePtr);
int UVCUtilReadPixioButtonStatus(int deviceIndex);

#endif /* uvc_util_h */
