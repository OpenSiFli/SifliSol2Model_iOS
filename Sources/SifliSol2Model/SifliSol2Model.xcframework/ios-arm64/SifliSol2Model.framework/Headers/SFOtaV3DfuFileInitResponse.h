//
//  SFOtaV3DfuFileInitResponse.h
//  SifliOtaSDK
//
//  Created by Sean on 2024/7/27.
//

//#import "SFOtaV3ResponsePacket.h"
#import <SifliSol2Model/SFOtaV3ResponsePacket.h>

NS_ASSUME_NONNULL_BEGIN

@interface SFOtaV3DfuFileInitResponse : SFOtaV3ResponsePacket
@property (nonatomic,assign)uint16_t otaVersion;
@property (nonatomic,assign)uint8_t resResponseFrequency;
@property (nonatomic,assign)uint8_t binResponseFrequency;
@property (nonatomic,assign)uint16_t resumeState;
@property (nonatomic,assign)uint32_t resumeFileCount;
@property (nonatomic,assign)uint16_t fileSystemBlock;
@property (nonatomic,assign)uint16_t resSliceLength;
@property (nonatomic,assign)uint16_t binSliceLength;

- (instancetype)initWithResult:(uint16_t)result
                    otaVersion:(uint16_t)otaVersion
          resResponseFrequency:(uint8_t)resResponseFrequency
          binResponseFrequency:(uint8_t)binResponseFrequency
                   resumeState:(uint16_t)resumeState
               resumeFileCount:(uint32_t)resumeFileCount
               fileSystemBlock:(uint16_t)fileSystemBlock
                resSliceLength:(uint16_t)resSliceLength
                binSliceLength:(uint16_t)binSliceLength;

@end

NS_ASSUME_NONNULL_END
