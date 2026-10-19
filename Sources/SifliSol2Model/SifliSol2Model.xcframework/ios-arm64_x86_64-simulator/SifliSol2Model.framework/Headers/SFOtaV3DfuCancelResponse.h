//
//  SFOtaV3DfuCancelResponse.h
//  SifliOtaSDK
//
//  Created by Sean on 2024/8/5.
//

//#import "SFOtaV3ResponsePacket.h"
#import <SifliSol2Model/SFOtaV3ResponsePacket.h>

NS_ASSUME_NONNULL_BEGIN

@interface SFOtaV3DfuCancelResponse : SFOtaV3ResponsePacket
- (instancetype)initWithResult:(uint16_t)result;
@end

NS_ASSUME_NONNULL_END
