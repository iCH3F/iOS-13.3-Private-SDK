//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray, NSString;

@interface MRSetDefaultSupportedCommandsMessage : MRProtocolMessage
{
}

- (NSUInteger)type;
@property(readonly, nonatomic) NSString *bundleID;
@property(readonly, nonatomic) NSArray *supportedCommands;
- (id)initWithDefaultSupportedCommands:(id)arg1 forClient:(id)arg2;

@end

