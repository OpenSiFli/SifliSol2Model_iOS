//
//  SFWatchfaceResponsePacket.h
//  SFWatchfaceSDK
//
//  Created by Sean on 2023/11/2.
//

//#import "SFOtaV3PacketBase.h"
#import <SifliSol2Model/SFOtaV3PacketBase.h>
//#import "SFOtaV3DevCode.h"
#import <SifliSol2Model/SFOtaV3DevCode.h>
NS_ASSUME_NONNULL_BEGIN

@interface SFOtaV3ResponsePacket : SFOtaV3PacketBase

/// 设备错误码，0为正确，其余为异常.已知的会收录到 @SFWatchfaceDevCode
@property (nonatomic,assign)uint16_t result;
@end

NS_ASSUME_NONNULL_END
