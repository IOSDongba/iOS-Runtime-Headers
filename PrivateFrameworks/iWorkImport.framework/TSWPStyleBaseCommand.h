/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSSStyle<TSSPreset>, TSSTheme;

@interface TSWPStyleBaseCommand : TSKCommand {
    TSSStyle<TSSPreset> *_style;
    TSSTheme *_theme;
}

@property(retain) TSSStyle<TSSPreset> * style;
@property(retain) TSSTheme * theme;

- (id)actionString;
- (void)commit;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithTheme:(id)arg1 style:(id)arg2;
- (void)loadFromMessage:(const struct StyleBaseCommandArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct CommandArchive {} *x3; struct Reference {} *x4; struct Reference {} *x5; int x6; unsigned int x7[1]; }*)arg1 unarchiver:(id)arg2;
- (BOOL)process;
- (void)redo;
- (void)saveToArchiver:(id)arg1;
- (void)saveToMessage:(struct StyleBaseCommandArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct CommandArchive {} *x3; struct Reference {} *x4; struct Reference {} *x5; int x6; unsigned int x7[1]; }*)arg1 archiver:(id)arg2;
- (void)setStyle:(id)arg1;
- (void)setTheme:(id)arg1;
- (id)style;
- (id)theme;
- (void)undo;

@end