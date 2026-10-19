//
//  SFOtaV3PacketBase.h
//  SifliOtaSDK
//
//  Created by Sean on 2024/7/27.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
typedef NS_ENUM(NSUInteger, SFOtaV3CommandType) {
    SFOtaV3CommandTypeDfuVersionRequest = 40,
    SFOtaV3CommandTypeDfuVersionRespponse = 41,
    
    SFOtaV3CommandTypeDfuRebootCmd = 42,
    
    SFOtaV3CommandTypeDfuFileInitRequest = 43,
    SFOtaV3CommandTypeDfuFileInitResponse = 44,
    
    SFOtaV3CommandTypeDfuFileInitCompletedRequest = 45,
    SFOtaV3CommandTypeDfuFileInitCompletedResponse = 46,
    
    SFOtaV3CommandTypeDfuFileStartRequest = 47,
    SFOtaV3CommandTypeDfuFileStartResponse = 48,
    
    SFOtaV3CommandTypeDfuFilePacket = 49,
    SFOtaV3CommandTypeDfuFilePacketResponse = 50,
    
    SFOtaV3CommandTypeDfuFileEndRequest = 51,
    SFOtaV3CommandTypeDfuFileEndRespnose = 52,
    
    SFOtaV3CommandTypeDfuFileTotalEndRequest = 53,
    SFOtaV3CommandTypeDfuFileTotalEndResponse = 54,
    
    SFOtaV3CommandTypeDfuLinkLoseCheckReqResponse = 35,
    SFOtaV3CommandTypeDfuLinkLoseCheckSendRequest = 36,
    
    SFOtaV3CommandTypeDfuAbortCmdResponse = 55,
    SFOtaV3CommandTypeDfuCancelRequest = 56,
    SFOtaV3CommandTypeDfuCancelResponse = 57,
    SFOtaV3CommandTypeDfuLinkLoseCheckFinishResponse = 58,
    ///视频预览
    SFOtaV3CommandTypeDfuFileContinualPacketRequest = 59,
    SFOtaV3CommandTypeDfuFileContinualPacketErrorResponse = 60,
    ///模式切换响应码
    SFOtaV3CommandTypeDfuFileContinualPacketModeResponse = 61,
};
typedef NS_ENUM(NSUInteger, SFOtaV3PhoneType) {
    SFOtaV3PhoneTypeIos = 1,
    SFOtaV3PhoneTypeAndroid = 2,
    SFOtaV3PhoneTypeLowIos = 3,//低版本iPhone
};

@interface SFOtaV3PacketBase : NSObject
@property (nonatomic,assign)SFOtaV3CommandType commandType;
- (instancetype)initWithCommandType:(SFOtaV3CommandType)commandType;
@end

NS_ASSUME_NONNULL_END
