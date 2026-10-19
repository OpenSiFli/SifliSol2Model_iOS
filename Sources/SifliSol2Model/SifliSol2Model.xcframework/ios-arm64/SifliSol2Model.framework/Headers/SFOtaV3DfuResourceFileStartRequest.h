//
//  SFOtaV3DfuResourceFileStartRequest.h
//  SifliOtaSDK
//
//  Created by Sean on 2024/7/27.
//


#import <SifliSol2Model/SFOtaV3RequestPacket.h>


NS_ASSUME_NONNULL_BEGIN

@interface SFOtaV3DfuResourceFileStartRequest : SFOtaV3RequestPacket
@property(nonatomic,assign)SFOtaV3DfuFileType fileType;
@property(nonatomic,assign)uint16_t fileIndex;
@property(nonatomic,assign)uint32_t fileLength;
@property(nonatomic,assign)uint32_t fileCount;
@property(nonatomic,assign)uint32_t alreadySendLength;
@property(nonatomic,copy)NSString* filename;
@property(nonatomic,assign)uint16_t filenameLength;

- (instancetype)initWithFileType:(SFOtaV3DfuFileType)fileType
                       fileIndex:(uint16_t)fileIndex
                      fileLength:(uint32_t)fileLength
                       fileCount:(uint32_t)fileCount
               alreadySendLength:(uint32_t)alreadySendLength
                        filename:(NSString *)filename;
@end

NS_ASSUME_NONNULL_END
