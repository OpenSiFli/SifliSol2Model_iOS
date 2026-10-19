//
//  SFOtaV3DfuFilePacketResponse.h
//  SifliOtaSDK
//
//  Created by Sean on 2024/7/27.
//

//#import "SFOtaV3ResponsePacket.h"
#import <SifliSol2Model/SFOtaV3ResponsePacket.h>

NS_ASSUME_NONNULL_BEGIN

@interface SFOtaV3DfuFilePacketResponse : SFOtaV3ResponsePacket
@property (nonatomic,assign)uint32_t newIndex;
///用于记录响应包被处理过的次数,在特定的场景由于线程配合关系响应包过早到达，需要延迟处理，记录处理次数
@property (nonatomic,assign)uint32_t handleCount;

- (instancetype)initWithResult:(uint16_t)result newIndex:(uint32_t)newIndex;
@end

NS_ASSUME_NONNULL_END
