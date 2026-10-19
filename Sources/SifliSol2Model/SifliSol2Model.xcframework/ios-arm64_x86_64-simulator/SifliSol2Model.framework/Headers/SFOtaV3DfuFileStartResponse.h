//
//  SFOtaV3DfuFileStartResponse.h
//  SifliOtaSDK
//
//  Created by Sean on 2024/7/27.
//

//#import "SFOtaV3ResponsePacket.h"
#import <SifliSol2Model/SFOtaV3ResponsePacket.h>

NS_ASSUME_NONNULL_BEGIN

@interface SFOtaV3DfuFileStartResponse : SFOtaV3ResponsePacket
- (instancetype)initWidthResult:(uint16_t)result;
@end

NS_ASSUME_NONNULL_END
