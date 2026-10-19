//
//  SFOtaV3Type.h
//  SifliSol2Model
//
//  Created by congqiang on 2026/10/13.
//

#ifndef SFOtaV3Type_h
#define SFOtaV3Type_h

typedef NS_ENUM(NSUInteger, SFOtaV3Type) {
    SFOtaV3TypeDynamicModule = 0,//表盘
    SFOtaV3TypeMutilLanguage = 1,//多语言
    SFOtaV3TypeBgPicture = 2,//背景图
    SFOtaV3TypeCustomFile = 3,//自定义
    SFOtaV3TypeMusic = 4,//背景音乐
    SFOtaV3TypeQjs = 5,//JavaScript
    SFOtaV3TypePhotoView = 7,//拍照预览
    SFOtaV3TypeAicModule = 8,//4g模块
    SFOtaV3TypeSilfiWatchface = 9,//SifliGuiBuiler 表盘
    SFOtaV3TypeFirmware = 10,//固件
    SFOtaV3TypeFirmwareManager = 11,//固件 ota manager
    SFOtaV3TypeSifliApp = 12,//SifliGuiBuilder app
    SFOtaV3TypeSifliAppRes = 13,//SifliGuiBuilder app 拓展资源
    SFOtaV3TypeSifliAppWidget = 14,//SifliGuiBuilder app 拓展组件
    SFOtaV3TypePythonApp =15,
    SFOtaV3TypePreviewNav = 17//地图投屏预览
};

#endif /* SFOtaV3Type_h */
