//
//  SFOtaV3DfuFilePacketRequest.h
//  SifliOtaSDK
//
//  Created by Sean on 2024/7/27.
//

//#import "SFOtaV3RequestPacket.h"
#import <SifliSol2Model/SFOtaV3RequestPacket.h>

NS_ASSUME_NONNULL_BEGIN

@interface SFOtaV3DfuFilePacketRequest : SFOtaV3RequestPacket
@property (nonatomic,assign)uint32_t packetIndex;
@property (nonatomic,assign)uint16_t imageIdOrFileIndex;
@property (nonatomic,assign)uint16_t dataLength;
@property (nonatomic,assign)uint8_t fileType;
@property (nonatomic,strong)NSData* packetData;
- (instancetype)initWidthPacketIndex:(uint32_t)packetIndex
          imageIdOrFileIndex:(uint16_t)imageIdOrFileIndex
                  dataLength:(uint16_t)dataLength
                    fileType:(uint8_t)fileType
                  packetData:(NSData *)packetData;
@end

NS_ASSUME_NONNULL_END
