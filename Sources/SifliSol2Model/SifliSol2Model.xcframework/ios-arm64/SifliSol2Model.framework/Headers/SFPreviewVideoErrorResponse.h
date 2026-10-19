//
//  SFPreviewVideoErrorResponse.h
//  SifliOtaSDK
//
//  Created by Sean on 2025/6/4.
//

//#import "SFOtaV3ResponsePacket.h"
#import <SifliSol2Model/SFOtaV3ResponsePacket.h>

NS_ASSUME_NONNULL_BEGIN

@interface SFPreviewVideoErrorResponse : SFOtaV3ResponsePacket
@property (nonatomic,assign)NSInteger errorType;
- (instancetype)initWithResult:(uint16_t)result errorType:(uint32_t)errorType;
@end

NS_ASSUME_NONNULL_END
