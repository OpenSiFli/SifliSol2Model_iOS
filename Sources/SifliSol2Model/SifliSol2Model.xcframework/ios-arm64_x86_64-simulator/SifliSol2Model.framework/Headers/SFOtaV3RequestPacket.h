//
//  SFWatchfaceRequestPacket.h
//  SFWatchfaceSDK
//
//  Created by Sean on 2023/11/2.
//

//#import "SFOtaV3PacketBase.h"
#import <SifliSol2Model/SFOtaV3PacketBase.h>
#import <SifliSol2Model/SFOtaV3DfuFileType.h>
#import <SifliSol2Model/SFOtaV3Type.h>

#import <SifliOCore/SFDataUtil.h>
NS_ASSUME_NONNULL_BEGIN

@interface SFOtaV3RequestPacket : SFOtaV3PacketBase
@property (nonatomic,assign,readonly) uint16_t lentgth;
@property (nonatomic,strong,readonly) NSData *reservedData;

- (void)updateReservedData:(NSData *)reservedData;

- (NSData *)mashal;
@end

NS_ASSUME_NONNULL_END
