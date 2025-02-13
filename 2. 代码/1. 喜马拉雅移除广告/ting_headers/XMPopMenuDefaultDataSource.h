//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMPopMenuDataSource-Protocol.h"

@class NSArray, NSString, UIColor, UIFont;

@interface XMPopMenuDefaultDataSource : NSObject <XMPopMenuDataSource>
{
    _Bool _canBeyondScreenEdge;
    NSArray *_textArray;
    NSArray *_imageArray;
    UIColor *_tintColor;
    UIColor *_highlightedTintColor;
    UIColor *_textColor;
    UIFont *_font;
    long long _indentationLevel;
    double _indentationWidth;
    double _rowHeight;
    double _width;
    double _maxHeight;
    struct UIEdgeInsets _separatorInset;
}

@property(nonatomic) struct UIEdgeInsets separatorInset; // @synthesize separatorInset=_separatorInset;
@property(nonatomic) _Bool canBeyondScreenEdge; // @synthesize canBeyondScreenEdge=_canBeyondScreenEdge;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(nonatomic) double indentationWidth; // @synthesize indentationWidth=_indentationWidth;
@property(nonatomic) long long indentationLevel; // @synthesize indentationLevel=_indentationLevel;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIColor *highlightedTintColor; // @synthesize highlightedTintColor=_highlightedTintColor;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) NSArray *imageArray; // @synthesize imageArray=_imageArray;
@property(retain, nonatomic) NSArray *textArray; // @synthesize textArray=_textArray;
- (void).cxx_destruct;
- (id)popMenuView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)popMenuView:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (long long)popMenuView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInPopMenuView:(id)arg1;
- (struct CGSize)popMenuView:(id)arg1 contentSizeThatFits:(struct CGSize)arg2;
- (id)tintColorForPopMenuView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

