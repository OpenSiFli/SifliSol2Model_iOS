//
//  CommandPairChecker.h
//  SifliOtaSDK
//
//  Created by Sean on 2024/8/13.
//

#import <Foundation/Foundation.h>
//#import "SFOtaV3PacketBase.h"
#import <SifliSol2Model/SFOtaV3PacketBase.h>

NS_ASSUME_NONNULL_BEGIN

@interface CommandPairChecker : NSObject
+ (BOOL)isCmdPairWithReqCmd:(SFOtaV3CommandType)reqCmdType rspCmdType:(SFOtaV3CommandType)rspCmdType;
@end

NS_ASSUME_NONNULL_END
