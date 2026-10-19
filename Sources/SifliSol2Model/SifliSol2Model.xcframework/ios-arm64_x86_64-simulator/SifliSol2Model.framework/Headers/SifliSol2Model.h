//
//  SifliSol2Model.h
//  SifliSol2Model
//
//  Created by congqiang on 2026/10/13.
//

#import <Foundation/Foundation.h>

//! Project version number for SifliSol2Model.
FOUNDATION_EXPORT double SifliSol2ModelVersionNumber;

//! Project version string for SifliSol2Model.
FOUNDATION_EXPORT const unsigned char SifliSol2ModelVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <SifliSol2Model/PublicHeader.h>

// MARK: - Error
#import <SifliSol2Model/SFOtaV3DevCode.h>
#import <SifliSol2Model/SFOtaV3Error.h>

// MARK: - Model
#import <SifliSol2Model/SFOtaV3DfuFileType.h>
#import <SifliSol2Model/SFOtaV3Type.h>
#import <SifliSol2Model/Sol2OtaVersion.h>

// MARK: - Packet / Request
#import <SifliSol2Model/SFOtaV3DfuCancelRequest.h>
#import <SifliSol2Model/SFOtaV3DfuCtrlFileStartRequest.h>
#import <SifliSol2Model/SFOtaV3DfuFileEndRequest.h>
#import <SifliSol2Model/SFOtaV3DfuFileInitCompletedRequest.h>
#import <SifliSol2Model/SFOtaV3DfuFileInitRequest.h>
#import <SifliSol2Model/SFOtaV3DfuFilePacketRequest.h>
#import <SifliSol2Model/SFOtaV3DfuFileTotalEndRequest.h>
#import <SifliSol2Model/SFOtaV3DfuImageFileStartRequest.h>
#import <SifliSol2Model/SFOtaV3DfuLoseCheckAcceptRequest.h>
#import <SifliSol2Model/SFOtaV3DfuRebootCmdRequest.h>
#import <SifliSol2Model/SFOtaV3DfuResourceFileStartRequest.h>
#import <SifliSol2Model/SFOtaV3DfuVersionRequest.h>
#import <SifliSol2Model/SFOtaV3RequestPacket.h>
#import <SifliSol2Model/SFPreviewVideoDataRequest.h>

// MARK: - Packet / Response
#import <SifliSol2Model/SFOtaV3DfuAbortResponse.h>
#import <SifliSol2Model/SFOtaV3DfuCancelResponse.h>
#import <SifliSol2Model/SFOtaV3DfuCtrlFileStartResponse.h>
#import <SifliSol2Model/SFOtaV3DfuFileEndResponse.h>
#import <SifliSol2Model/SFOtaV3DfuFileInitCompletedResponse.h>
#import <SifliSol2Model/SFOtaV3DfuFileInitResponse.h>
#import <SifliSol2Model/SFOtaV3DfuFilePacketResponse.h>
#import <SifliSol2Model/SFOtaV3DfuFileStartResponse.h>
#import <SifliSol2Model/SFOtaV3DfuFileTotalEndResponse.h>
#import <SifliSol2Model/SFOtaV3DfuLoseCheckReqResponse.h>
#import <SifliSol2Model/SFOtaV3DfuVersionResponse.h>
#import <SifliSol2Model/SFOtaV3ResponsePacket.h>
#import <SifliSol2Model/SFOtaV3SDfuLoseCheckFinishResponse.h>
#import <SifliSol2Model/SFPreviewVideoErrorResponse.h>
#import <SifliSol2Model/SFPreviewVideoModeResponse.h>

// MARK: - Packet (Base / Factory)
#import <SifliSol2Model/SFOtaV3PacketBase.h>
#import <SifliSol2Model/SFOtaV3ResponseFactory.h>

// MARK: - Task
#import <SifliSol2Model/CommandPairChecker.h>
#import <SifliSol2Model/VersionConstant.h>
