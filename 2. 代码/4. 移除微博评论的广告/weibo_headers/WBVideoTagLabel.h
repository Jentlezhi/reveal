//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIColor, UIImageView, UILabel, WBVideoTagViewModel;

@interface WBVideoTagLabel : UIControl
{
    UIImageView *_iconImageView;
    UILabel *_titlelabel;
    WBVideoTagViewModel *_tagModel;
    unsigned long long _maxWordCount;
    unsigned long long _fontSize;
    UIColor *_borderColor;
    double _borderWidth;
    UIColor *_fillColor;
    double _cornerRadius;
}

+ (struct CGSize)sizeWithModel:(id)arg1 maxWidth:(double)arg2 contentInset:(struct UIEdgeInsets)arg3;
+ (struct CGSize)sizeWithModel:(id)arg1 maxWidth:(double)arg2;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) unsigned long long fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) unsigned long long maxWordCount; // @synthesize maxWordCount=_maxWordCount;
@property(retain, nonatomic) WBVideoTagViewModel *tagModel; // @synthesize tagModel=_tagModel;
@property(retain, nonatomic) UILabel *titlelabel; // @synthesize titlelabel=_titlelabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateViews;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (id)getTitlelabelFillColor;
- (id)getTitlelabelBorderColor;
- (id)getTitlelabelTextColor;
- (id)initWithTagModel:(id)arg1 style:(long long)arg2;
- (id)initWithTagModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

