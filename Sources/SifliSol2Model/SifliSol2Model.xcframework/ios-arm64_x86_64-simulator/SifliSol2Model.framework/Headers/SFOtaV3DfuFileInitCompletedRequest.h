//
//  SFOtaV3DfuFileInitCompletedRequest.h
//  SifliOtaSDK
//
//  Created by Sean on 2024/7/27.
//

//#import "SFOtaV3RequestPacket.h"
#import <SifliSol2Model/SFOtaV3RequestPacket.h>

NS_ASSUME_NONNULL_BEGIN

@interface SFOtaV3DfuFileInitCompletedRequest : SFOtaV3RequestPacket
@property (nonatomic,assign)uint8_t resumeState;
@property (nonatomic,assign)BOOL withResFilePath;
@property (nonatomic,assign)uint16_t filenameLength;
@property (nonatomic,assign)uint32_t blockSize;
@property (nonatomic,copy)NSString* fileName;
- (instancetype)initWithResume:(uint8_t)resumeState
       withResFilePath:(BOOL)withResFilePath
             blockSize:(uint32_t)blockSize
              filename:(NSString *)filename;
@end

NS_ASSUME_NONNULL_END
