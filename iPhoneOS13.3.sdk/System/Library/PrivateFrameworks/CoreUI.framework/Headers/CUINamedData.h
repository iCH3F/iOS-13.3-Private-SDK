//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/CUINamedLookup.h>

@class NSData, NSString;

@interface CUINamedData : CUINamedLookup
{
}

- (id)description;
- (id)_renditionName;
@property(readonly, copy, nonatomic) NSString *utiType;
@property(readonly, copy, nonatomic) NSData *data;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(NSUInteger)arg3;

@end

