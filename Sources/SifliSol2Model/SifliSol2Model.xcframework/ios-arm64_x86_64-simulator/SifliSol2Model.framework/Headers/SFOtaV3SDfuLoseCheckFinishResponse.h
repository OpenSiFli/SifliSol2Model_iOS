//
//  SFOtaV3SDfuLoseCheckFinishResponse.h
//  SifliOtaSDK
//
//  Created by Sean on 2025/1/13.
//

//#import "SFOtaV3ResponsePacket.h"
#import <SifliSol2Model/SFOtaV3ResponsePacket.h>

NS_ASSUME_NONNULL_BEGIN

@interface SFOtaV3SDfuLoseCheckFinishResponse : SFOtaV3ResponsePacket
- (instancetype)initWithResult:(uint16_t)result;
@end

NS_ASSUME_NONNULL_END
