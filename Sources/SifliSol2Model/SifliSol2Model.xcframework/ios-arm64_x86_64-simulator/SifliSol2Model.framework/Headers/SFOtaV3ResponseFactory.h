//
//  SFOtaV3ResponseFacotry.h
//  SifliOtaSDK
//
//  Created by Sean on 2024/8/6.
//

#import <Foundation/Foundation.h>
//#import "SFOtaV3ResponsePacket.h"
//#import "SFOtaV3Error.h"
//#import "SFOtaV3PacketBase.h"

#import <SifliSol2Model/SFOtaV3ResponsePacket.h>
#import <SifliSol2Model/SFOtaV3Error.h>
#import <SifliSol2Model/SFOtaV3PacketBase.h>

NS_ASSUME_NONNULL_BEGIN
@interface SFOtaV3ResponseResult : NSObject
//解析成功时返回response,失败时返回error.
@property (nonatomic,assign)BOOL success;
@property (nonatomic,strong)SFOtaV3ResponsePacket *response;
@property (nonatomic,strong)SFOtaV3Error *error;
@end
@interface SFOtaV3ResponseFacotry : NSObject
+ (SFOtaV3ResponseResult *)parseResponseWithData:(NSData *)data;
@end

NS_ASSUME_NONNULL_END
