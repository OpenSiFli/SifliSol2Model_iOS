//
//  SFOtaV3DfuVersionRequest.h
//  SifliOtaSDK
//
//  Created by Sean on 2024/7/27.
//

//#import "SFOtaV3RequestPacket.h"
#import <SifliSol2Model/SFOtaV3RequestPacket.h>

NS_ASSUME_NONNULL_BEGIN

@interface SFOtaV3DfuVersionRequest : SFOtaV3RequestPacket
@property(nonatomic,assign)SFOtaV3Type otaType;
@property(nonatomic,assign)uint16_t otaVersion;
- (instancetype)initWithOtaType:(SFOtaV3Type)otaType;
@end

NS_ASSUME_NONNULL_END
