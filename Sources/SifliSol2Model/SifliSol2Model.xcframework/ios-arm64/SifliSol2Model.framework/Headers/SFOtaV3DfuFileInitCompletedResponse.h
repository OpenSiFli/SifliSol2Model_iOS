//
//  SFOtaV3DfuFileInitCompletedResponse.h
//  SifliOtaSDK
//
//  Created by Sean on 2024/7/27.
//

//#import "SFOtaV3ResponsePacket.h"
#import <SifliSol2Model/SFOtaV3ResponsePacket.h>

NS_ASSUME_NONNULL_BEGIN

@interface SFOtaV3DfuFileInitCompletedResponse : SFOtaV3ResponsePacket
@property(nonatomic,assign)uint32_t leftBlock;
- (instancetype)initWithResult:(uint16_t)result leftBlock:(uint32_t)leftBlock;
@end

NS_ASSUME_NONNULL_END
