//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CNVCardReadingOptions, NSArray, NSData;
@protocol CNVCardParsedResultBuilderFactory;

@protocol CNVCardParsingConcurrencyStrategy <NSObject>
- (NSArray *)parseData:(NSData *)arg1 options:(CNVCardReadingOptions *)arg2 resultFactory:(id <CNVCardParsedResultBuilderFactory>)arg3;
@end

