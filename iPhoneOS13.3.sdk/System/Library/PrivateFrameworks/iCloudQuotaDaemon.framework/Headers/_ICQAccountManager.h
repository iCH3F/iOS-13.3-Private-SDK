//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccountStore;

@interface _ICQAccountManager : NSObject
{
    ACAccountStore *_accountStore;
}

@property(readonly) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
// - (void).cxx_destruct;
- (id)initWithAccountStore:(id)arg1;
- (id)init;

@end
