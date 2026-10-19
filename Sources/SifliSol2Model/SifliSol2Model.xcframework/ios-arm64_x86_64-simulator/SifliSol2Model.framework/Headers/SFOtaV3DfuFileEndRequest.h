//
//  SFOtaV3DfuFileEndRequest.h
//  SifliOtaSDK
//
//  Created by Sean on 2024/7/27.
//

//#import "SFOtaV3RequestPacket.h"
#import <SifliSol2Model/SFOtaV3RequestPacket.h>

NS_ASSUME_NONNULL_BEGIN

@interface SFOtaV3DfuFileEndRequest : SFOtaV3RequestPacket
@property(nonatomic,assign)BOOL moreImage;
@property(nonatomic,assign)SFOtaV3DfuFileType fileType;
@property(nonatomic,assign)uint16_t imageIdOrFileindex;
- (instancetype)initWithFileType:(SFOtaV3DfuFileType)fileType
                       moreImage:(BOOL)moreImage
              imageIdOrFileIndex:(uint16_t)imageIdOrFileindex;
@end

NS_ASSUME_NONNULL_END
