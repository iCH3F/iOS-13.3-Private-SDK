//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SpringBoardUIServices/TPNumberPadButtonProtocol-Protocol.h>

@interface SBEmptyButtonView : UIView <TPNumberPadButtonProtocol>
{
    unsigned int _char;
}

@property unsigned int character; // @synthesize character=_char;
- (CGSize)intrinsicContentSize;
- (id)initForCharacter:(unsigned int)arg1;

@end

