//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface SKUIToggleStateItem : NSObject <NSCopying>
{
    BOOL _toggled;
    long long _count;
    NSString *_itemIdentifier;
    NSString *_nonToggledString;
    NSString *_toggledString;
}

@property(copy, nonatomic) NSString *toggledString; // @synthesize toggledString=_toggledString;
@property(nonatomic) BOOL toggled; // @synthesize toggled=_toggled;
@property(copy, nonatomic) NSString *nonToggleString; // @synthesize nonToggleString=_nonToggledString;
@property(copy, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(nonatomic) long long count; // @synthesize count=_count;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;

@end

