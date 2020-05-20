//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXDocumentLayout-Protocol.h>

@class NSString;

@interface SXDocumentLayout : NSObject <SXDocumentLayout>
{
    long long _width;
    long long _margin;
    long long _gutter;
    NSUInteger _columns;
}

@property(readonly, nonatomic) NSUInteger columns; // @synthesize columns=_columns;
@property(readonly, nonatomic) long long gutter; // @synthesize gutter=_gutter;
@property(readonly, nonatomic) long long margin; // @synthesize margin=_margin;
@property(readonly, nonatomic) long long width; // @synthesize width=_width;
@property(readonly, copy) NSString *description;
- (id)initWithWidth:(long long)arg1 margin:(long long)arg2 gutter:(long long)arg3 columns:(NSUInteger)arg4;

@end

