//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _ML3DatabaseNaturalStatement : NSObject
{
    NSString *_sql;
    NSMutableArray *_parameters;
}

+ (id)naturalStatementWithSQL:(id)arg1 parameters:(id)arg2;
@property(retain, nonatomic) NSMutableArray *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) NSString *sql; // @synthesize sql=_sql;
// - (void).cxx_destruct;
- (void)setParameter:(id)arg1 forPosition:(NSUInteger)arg2;
- (id)init;

@end

