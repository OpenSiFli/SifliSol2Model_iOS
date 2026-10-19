//
//  SFOtaV3DfuFileType.h
//  SifliSol2Model
//
//  Created by congqiang on 2026/10/13.
//

#ifndef SFOtaV3DfuFileType_h
#define SFOtaV3DfuFileType_h

typedef NS_ENUM(NSUInteger, SFOtaV3DfuFileType) {
    SFOtaV3DfuFileTypeZipResource = 0,//zip资源文件
    SFOtaV3DfuFileTypeZipResourceNoFilePath = 1,//zip资源没有路径
    SFOtaV3DfuFileTypeCtrlFile = 2,//固件ota 控制文件
    SFOtaV3DfuFileTypeBinFile = 3,//固件ota image bin文件
    SFOtaV3DfuFileTypeTransBinFile = 4,//直接传输的bin文件
};

#endif /* SFOtaV3DfuFileType_h */
