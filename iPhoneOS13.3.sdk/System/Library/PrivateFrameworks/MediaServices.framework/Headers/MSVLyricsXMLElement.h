//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableString, NSString;

@interface MSVLyricsXMLElement : NSObject
{
    NSString *_elementName;
    NSString *_identifier;
    NSMutableString *_mutableText;
}

@property(retain, nonatomic) NSMutableString *mutableText; // @synthesize mutableText=_mutableText;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *elementName; // @synthesize elementName=_elementName;
// - (void).cxx_destruct;
- (id)description;

@end

