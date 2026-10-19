//
//  SFOtaV3DfuCtrlFileStartResponse.h
//  SifliOtaSDK
//
//  Created by Sean on 2024/7/27.
//

//#import "SFOtaV3ResponsePacket.h"
#import <SifliSol2Model/SFOtaV3ResponsePacket.h>

NS_ASSUME_NONNULL_BEGIN

@interface SFOtaV3DfuCtrlFileStartResponse : SFOtaV3ResponsePacket
@property(nonatomic,assign)BOOL resumeState;
@property(nonatomic,assign)uint8_t binResponseFrequency;
@property(nonatomic,assign)uint32_t completedSliceCount;
@property(nonatomic,assign)uint16_t imageId;

- (instancetype)initWithResult:(uint16_t)result
                  resumeState:(BOOL)resumeState
         binResponseFrequency:(uint8_t)binResponseFrequency
          completedSliceCount:(uint32_t)completedSliceCount
                       imageId:(uint16_t)imageId;

@end

NS_ASSUME_NONNULL_END
