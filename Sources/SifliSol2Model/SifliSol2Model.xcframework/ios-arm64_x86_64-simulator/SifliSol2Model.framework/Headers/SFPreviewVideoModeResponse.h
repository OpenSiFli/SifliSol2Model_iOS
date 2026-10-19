//
//  SFPreviewVideoModeResponse.h
//  SifliOtaSDK
//
//  Created by congqiang on 2026/5/8.
//

#import <Foundation/Foundation.h>
//#import "SFOtaV3DfuFilePacketResponse.h"
#import <SifliSol2Model/SFOtaV3DfuFilePacketResponse.h>

NS_ASSUME_NONNULL_BEGIN

@interface SFPreviewVideoModeResponse : SFOtaV3DfuFilePacketResponse
@property (nonatomic,assign)uint16_t previewMode;
- (instancetype)initWithMode:(uint16_t)previewMode;
@end

NS_ASSUME_NONNULL_END
