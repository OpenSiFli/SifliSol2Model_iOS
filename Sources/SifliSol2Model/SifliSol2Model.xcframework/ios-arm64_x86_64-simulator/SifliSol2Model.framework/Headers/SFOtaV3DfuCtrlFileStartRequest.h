//
//  SFOtaV3DfuCtrlFileStartRequest.h
//  SifliOtaSDK
//
//  Created by Sean on 2024/7/27.
//

//#import "SFOtaV3RequestPacket.h"
#import <SifliSol2Model/SFOtaV3RequestPacket.h>

NS_ASSUME_NONNULL_BEGIN

@interface SFOtaV3DfuCtrlFileStartRequest : SFOtaV3RequestPacket
@property (nonatomic,strong)NSData *ctrlPacketData;
@property (nonatomic,assign)SFOtaV3DfuFileType fileType;
- (instancetype)initWithCtrlPacket:(NSData *)ctrlPacketData;
@end

NS_ASSUME_NONNULL_END
