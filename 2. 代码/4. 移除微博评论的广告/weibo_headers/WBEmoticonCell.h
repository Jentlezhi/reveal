//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, WBEmoticon, WBEmoticonMagnifierView;

@interface WBEmoticonCell : UICollectionViewCell
{
    _Bool _isDeleteCell;
    _Bool _isDarkMode;
    WBEmoticon *_emoticon;
    double _fontSize;
    UIImageView *_imageView;
    WBEmoticonMagnifierView *_magnifier;
    struct CGRect _imageFrame;
    struct CGRect _delFrame;
}

@property(nonatomic) struct CGRect delFrame; // @synthesize delFrame=_delFrame;
@property(nonatomic) struct CGRect imageFrame; // @synthesize imageFrame=_imageFrame;
@property(retain, nonatomic) WBEmoticonMagnifierView *magnifier; // @synthesize magnifier=_magnifier;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool isDarkMode; // @synthesize isDarkMode=_isDarkMode;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) _Bool isDeleteCell; // @synthesize isDeleteCell=_isDeleteCell;
@property(retain, nonatomic) WBEmoticon *emoticon; // @synthesize emoticon=_emoticon;
- (void).cxx_destruct;
- (void)hideMagnifier;
- (void)showMagnifier:(id)arg1 animation:(_Bool)arg2;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (id)initWithFrame:(struct CGRect)arg1 size:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

