//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface StockDataSource : NSObject
{
    long long _identifier;
    NSString *_name;
    NSString *_sourceDescription;
}

@property(copy, nonatomic) NSString *sourceDescription; // @synthesize sourceDescription=_sourceDescription;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (id)description;
- (id)archiveDictionary;
@property(readonly, nonatomic) NSString *localizedSourceDescription;
- (id)initWithDictionary:(id)arg1;

@end

