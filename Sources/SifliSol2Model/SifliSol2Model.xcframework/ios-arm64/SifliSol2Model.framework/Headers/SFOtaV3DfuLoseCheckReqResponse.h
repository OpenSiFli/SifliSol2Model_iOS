//
//  SFOtaV3DfuLoseCheckReqResponse.h
//  SifliOtaSDK
//
//  Created by Sean on 2024/8/5.
//

//#import "SFOtaV3ResponsePacket.h"
#import <SifliSol2Model/SFOtaV3ResponsePacket.h>

NS_ASSUME_NONNULL_BEGIN

@interface SFOtaV3DfuLoseCheckReqResponse : SFOtaV3ResponsePacket
@property(nonatomic,assign)uint16_t rspFrequency;
@property(nonatomic,assign)uint32_t completeSliceCount;

- (instancetype)initWithResult:(uint16_t)result
                  rspFrequency:(uint16_t)rspFrequency
            completeSliceCount:(uint32_t)completeSliceCount;
@end

NS_ASSUME_NONNULL_END
