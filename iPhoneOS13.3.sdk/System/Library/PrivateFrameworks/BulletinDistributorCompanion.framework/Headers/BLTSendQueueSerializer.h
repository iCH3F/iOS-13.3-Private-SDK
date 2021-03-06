//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface BLTSendQueueSerializer : NSObject
{
    BOOL _usesMessageIdentifiers;
    NSURL *_sendFileURL;
}

@property(readonly, nonatomic) BOOL usesMessageIdentifiers; // @synthesize usesMessageIdentifiers=_usesMessageIdentifiers;
@property(copy, nonatomic) NSURL *sendFileURL; // @synthesize sendFileURL=_sendFileURL;
// - (void).cxx_destruct;
- (BOOL)handleFileURL:(id)arg1 protobufHandler:(id)arg2;
- (void)sendWithSender:(id)arg1 timeout:(id)arg2 responseHandlers:(id)arg3 didSend:(id /* CDUnknownBlockType */)arg4 didQueue:(id /* CDUnknownBlockType */)arg5;
- (void)add:(id)arg1 type:(unsigned short)arg2 messageIdentifier:(id )arg3;
- (void)add:(id)arg1 type:(unsigned short)arg2;
- (void)cleanup;
- (id)initWithUsesMessageIdentifiers:(BOOL)arg1;

@end

