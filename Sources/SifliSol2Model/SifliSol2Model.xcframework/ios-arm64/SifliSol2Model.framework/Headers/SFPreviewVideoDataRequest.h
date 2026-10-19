//
//  SFWatchfaceVideoDataRequest.h
//  SFWatchfaceSDK
//
//  Created by Sean on 2023/11/3.
//

//#import "SFOtaV3RequestPacket.h"
#import <SifliSol2Model/SFOtaV3RequestPacket.h>

NS_ASSUME_NONNULL_BEGIN
typedef NS_ENUM(NSUInteger, SFPreviewVideoDataType) {
    ///文件长度在Max_data_len以内，可以在一包内发完
    SFPreviewVideoDataTypeSingle = 0,
    ///文件长度超过max_data_len，按照max_data_len长度拆分，这是第一包
    SFPreviewVideoDataTypeFirst = 1,
    ///文件长度超过max_data_len，中间包
    SFPreviewVideoDataTypeContinue = 2,
    ///文件长度超过max_data_len，最后包
    SFPreviewVideoDataTypeLast = 3
};

@interface SFPreviewVideoDataRequest : SFOtaV3RequestPacket
@property (nonatomic,assign,readonly) SFPreviewVideoDataType dataType;
@property (nonatomic,assign,readonly) uint32_t fileLen;
@property (nonatomic,assign,readonly) uint32_t index;
@property (nonatomic,strong,readonly) NSData *fileData;
@property (nonatomic,assign,readonly) uint8_t reserved;
@property (nonatomic,assign,readonly) BOOL needRsp;

- (instancetype)initWithDataType:(SFPreviewVideoDataType)dataType
                         fileLen:(uint32_t)fileLen
                           index:(uint32_t)index
                        fileData:(NSData *)fileData
                        reserved:(uint8_t)reserved
                         needRsp:(BOOL)needRsp;

@end

NS_ASSUME_NONNULL_END
