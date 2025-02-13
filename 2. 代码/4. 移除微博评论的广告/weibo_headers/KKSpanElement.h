//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KKElement.h"

#import "KKTextElement-Protocol.h"

@class NSString, UIColor, UIFont;

@interface KKSpanElement : KKElement <KKTextElement>
{
    int _textDecoration;
    UIColor *_color;
    UIFont *_font;
    UIColor *_strokeColor;
    struct KKPixel _lineSpacing;
    struct KKPixel _paragraphSpacing;
    struct KKPixel _letterSpacing;
    struct KKPixel _baseline;
    struct KKPixel _strokeSpacing;
}

+ (void)initialize;
@property(nonatomic) int textDecoration; // @synthesize textDecoration=_textDecoration;
@property(nonatomic) struct KKPixel strokeSpacing; // @synthesize strokeSpacing=_strokeSpacing;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) struct KKPixel baseline; // @synthesize baseline=_baseline;
@property(nonatomic) struct KKPixel letterSpacing; // @synthesize letterSpacing=_letterSpacing;
@property(nonatomic) struct KKPixel paragraphSpacing; // @synthesize paragraphSpacing=_paragraphSpacing;
@property(nonatomic) struct KKPixel lineSpacing; // @synthesize lineSpacing=_lineSpacing;
- (void).cxx_destruct;
- (void)changedKey:(id)arg1;
@property(readonly, nonatomic) NSString *text;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) long long textAlign;

@end

