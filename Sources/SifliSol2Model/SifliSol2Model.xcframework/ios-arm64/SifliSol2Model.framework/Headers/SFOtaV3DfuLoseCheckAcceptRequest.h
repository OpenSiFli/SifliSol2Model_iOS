//
//  SFOtaV3DfuLoseCheckAcceptRequest.h
//  SifliOtaSDK
//
//  Created by Sean on 2024/8/5.
//

//#import "SFOtaV3RequestPacket.h"
#import <SifliSol2Model/SFOtaV3RequestPacket.h>

NS_ASSUME_NONNULL_BEGIN

@interface SFOtaV3DfuLoseCheckAcceptRequest : SFOtaV3RequestPacket
@property(nonatomic,assign)uint16_t result;
- (instancetype)initWithResult:(uint16_t)result;
@end

NS_ASSUME_NONNULL_END
