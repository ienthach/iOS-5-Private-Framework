/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "ASTask.h"

@class NSArray, ASMailMessage;

@interface ASItemOperationsTask : ASTask {
	NSArray* _commands;
	int _numReplacedItems;
	int _bodyTruncationBytes;
	int _mimeSupport;
	ASMailMessage* _streamingMailMessage;
}
// inherited: -(int)commandCode;
// inherited: -(void)dealloc;
// inherited: -(id)init;
-(int)mimeSupport;
-(void)setMIMESupport:(int)support;
-(int)bodyType;
-(void)setBodyTruncationBytes:(int)bytes;
-(id)commands;
-(void)setCommands:(id)commands;
-(int)_mimeSupportCode;
// inherited: -(id)requestBody;
-(int)handleStreamOperation:(int)operation forCodePage:(int)codePage tag:(int)tag withParentItem:(id)parentItem withData:(char*)data dataLength:(int)length;
-(id)replacementObjectForEmailItem:(id)emailItem;
// inherited: -(BOOL)processContext:(id)context;
// inherited: -(void)finishWithError:(id)error;
// inherited: -(int)taskStatusForExchangeStatus:(int)exchangeStatus;
-(id)streamingMailMessage;
-(void)setStreamingMailMessage:(id)message;
@end

