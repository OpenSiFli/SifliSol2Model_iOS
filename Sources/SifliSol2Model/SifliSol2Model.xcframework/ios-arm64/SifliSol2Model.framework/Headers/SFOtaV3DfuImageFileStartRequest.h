//
//  SFOtaV3DfuImageFileStartRequest.h
//  SifliOtaSDK
//
//  Created by Sean on 2024/7/27.
//

//#import "SFOtaV3RequestPacket.h"
#import <SifliSol2Model/SFOtaV3RequestPacket.h>

NS_ASSUME_NONNULL_BEGIN

@interface SFOtaV3DfuImageFileStartRequest : SFOtaV3RequestPacket
@property(nonatomic,assign)SFOtaV3DfuFileType fileType;
@property(nonatomic,assign)uint32_t fileLength;
@property(nonatomic,assign)uint32_t sliceCount;
@property(nonatomic,assign)uint16_t imageId;
@property(nonatomic,assign)uint32_t targetAddress;
@property(nonatomic,assign)BOOL resumeStatus;

- (instancetype)initWithFileType:(SFOtaV3DfuFileType)fileType
                      fileLength:(uint32_t)fileLength
                      sliceCount:(uint32_t)sliceCount
                         imageId:(uint16_t)imageId
                   targetAddress:(uint32_t)targetAddress
                    resumeStatus:(BOOL)resumeStatus;
@end

NS_ASSUME_NONNULL_END
