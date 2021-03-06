//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/EFLoggable-Protocol.h>

@class MFMailMessageLibrary, MFMailboxProvider;

@interface MFMessageTransformer : NSObject <EFLoggable>
{
    MFMailMessageLibrary *_library;
    MFMailboxProvider *_mailboxProvider;
}

+ (id)log;
@property(retain, nonatomic) MFMailboxProvider *mailboxProvider; // @synthesize mailboxProvider=_mailboxProvider;
@property(retain, nonatomic) MFMailMessageLibrary *library; // @synthesize library=_library;
// - (void).cxx_destruct;
- (id)transformLegacyMailMessages:(id)arg1 mailboxScope:(id)arg2;
- (id)_transformLegacyMailMessage:(id)arg1 mailboxScope:(id)arg2 duplicateInfo:(id)arg3 loaderBlock:(id /* CDUnknownBlockType */)arg4;
- (id)transformLegacyMailMessage:(id)arg1 mailboxScope:(id)arg2 loaderBlock:(id /* CDUnknownBlockType */)arg3;
- (id)initWithLibrary:(id)arg1 mailboxProvider:(id)arg2;

@end

