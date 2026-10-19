//
//  SFOtaV3DfuVersionResponse.h
//  SifliOtaSDK
//
//  Created by Sean on 2024/7/27.
//

//#import "SFOtaV3ResponsePacket.h"
#import <SifliSol2Model/SFOtaV3ResponsePacket.h>

NS_ASSUME_NONNULL_BEGIN

@interface SFOtaV3DfuVersionResponse : SFOtaV3ResponsePacket
@property(nonatomic,assign)uint16_t otaVersion;
@property(nonatomic,assign)BOOL isNeedReboot;

- (instancetype)initWithResult:(uint16_t)result otaVersion:(uint16_t)otaVersion needReboot:(BOOL)isNeedReboot;
@end

NS_ASSUME_NONNULL_END
