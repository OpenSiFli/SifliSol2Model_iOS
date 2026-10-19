//
//  SFOtaV3DfuFileInitRequest.h
//  SifliOtaSDK
//
//  Created by Sean on 2024/7/27.
//

//#import "SFOtaV3RequestPacket.h"
#import <SifliSol2Model/SFOtaV3RequestPacket.h>

NS_ASSUME_NONNULL_BEGIN

@interface SFOtaV3DfuFileInitRequest : SFOtaV3RequestPacket
@property(nonatomic,assign)uint16_t otaVersion;
@property(nonatomic,assign)uint16_t otaType;
@property(nonatomic,assign)uint32_t fileCount;
@property(nonatomic,assign)uint32_t fileLength;
@property(nonatomic,strong)NSData * fileMd5;
@property(nonatomic,assign)uint8_t phoneType;
@property(nonatomic,assign)uint8_t align;
- (instancetype)initWithOtaType:(uint16_t)otatype
                      fileCount:(uint32_t)fileCount
                     fileLength:(uint32_t)fileLength
                        fileMd5:(NSData *)fileMd5
                          align:(uint8_t)align;
@end

NS_ASSUME_NONNULL_END
