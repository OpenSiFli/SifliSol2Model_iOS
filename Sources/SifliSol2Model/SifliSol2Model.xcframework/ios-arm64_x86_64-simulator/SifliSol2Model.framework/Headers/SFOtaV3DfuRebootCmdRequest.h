//
//  SFOtaV3DfuRebootCmdRequest.h
//  SifliOtaSDK
//
//  Created by Sean on 2024/7/27.
//

//#import "SFOtaV3RequestPacket.h"
#import <SifliSol2Model/SFOtaV3RequestPacket.h>

NS_ASSUME_NONNULL_BEGIN

@interface SFOtaV3DfuRebootCmdRequest : SFOtaV3RequestPacket
@property(nonatomic,assign)BOOL isReboot;
- (instancetype)initWithReboot:(BOOL)isReboot;
@end

NS_ASSUME_NONNULL_END
