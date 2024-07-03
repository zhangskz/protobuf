// Protocol Buffers - Google's data interchange format
// Copyright 2024 Google LLC.  All rights reserved.
//
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file or at
// https://developers.google.com/open-source/licenses/bsd

package com.google.protobuf;

import java.util.Iterator;
import java.util.List;
import java.util.Map;

import com.google.protobuf.Descriptors.Descriptor;
import com.google.protobuf.Descriptors.FieldDescriptor;

/**
 * Stub for GeneratedMessageV3 wrapping GeneratedMessage for compatibility with older gencode.
 *
 * @deprecated This class is deprecated, and slated for removal in the next Java breaking change
 *     (5.x in 2025 Q1). Users should update gencode to >= 4.26.x which uses GeneratedMessage
 *     instead of GeneratedMessageV3.
 */
@Deprecated
public abstract class GeneratedMessageV3 extends GeneratedMessage {
  private static final long serialVersionUID = 1L;

  protected GeneratedMessageV3() {
    super();
  }

  protected GeneratedMessageV3(Builder<?> builder) {
    super(builder);
  }

  /**
   * Stub for GeneratedMessageV3.Builder wrapping GeneratedMessage.Builder for
   * compatibility with older gencode.
   *
   * @deprecated This class is deprecated, and slated for removal in the next Java breaking change
   *     (5.x in 2025 Q1). Users should update gencode to >= 4.26.x which uses
   *     GeneratedMessage.Builder instead of GeneratedMessageV3.Builder.
   */
 /** Builder class for {@link GeneratedMessage}. */
 @SuppressWarnings("unchecked")
 public abstract static class Builder<BuilderT extends Builder<BuilderT>>
     extends GeneratedMessage.Builder<BuilderT> {

   protected Builder() {
     this(null);
   }

   protected Builder(BuilderParent builderParent) {
     super(builderParent);
   }
  }

  @Override
  protected FieldAccessorTable internalGetFieldAccessorTable() {
    throw new UnsupportedOperationException("This is supposed to be overridden by subclasses.");
  }

   
  @Deprecated
  public interface ExtendableMessageOrBuilder<MessageT extends ExtendableMessage<MessageT>>
   extends GeneratedMessage.ExtendableMessageOrBuilder<MessageT> {
  }

  @Deprecated
  public abstract static class ExtendableMessage<MessageT extends ExtendableMessage<MessageT>>
      extends GeneratedMessage.ExtendableMessage<MessageT> {

    protected ExtendableMessage() {
      super();
    }

    protected ExtendableMessage(GeneratedMessageV3.ExtendableBuilder<MessageT, ?> builder) {
      super(builder);
    }

    @Deprecated
    protected class ExtensionWriter extends GeneratedMessage.ExtendableMessage<MessageT>.ExtensionWriter{
      // Imagine how much simpler this code would be if Java iterators had
      // a way to get the next element without advancing the iterator.
  
      private ExtensionWriter(final boolean messageSetWireFormat) {
        super(messageSetWireFormat);
      }
    }
    
    protected ExtensionWriter newExtensionWriter() {
      return new ExtensionWriter(false);
    }
  }

  /**
   * Stub for GeneratedMessageV3.ExtendableBuilder wrapping GeneratedMessage.ExtendableBuilder for
   * compatibility with older gencode.
   *
   * @deprecated This class is deprecated, and slated for removal in the next Java breaking change
   *     (5.x in 2025 Q1). Users should update gencode to >= 4.26.x which uses
   *     GeneratedMessage.ExtendableBuilder instead of GeneratedMessageV3.ExtendableBuilder.
   */
  @Deprecated
  public abstract static class ExtendableBuilder<
          MessageT extends ExtendableMessage<MessageT>,
          BuilderT extends ExtendableBuilder<MessageT, BuilderT>>
      extends GeneratedMessage.ExtendableBuilder<MessageT, BuilderT> {
      // extends GeneratedMessageV3.Builder
    protected ExtendableBuilder() {
      super();
    }

    protected ExtendableBuilder(BuilderParent parent) {
      super(parent);
    }

    // Support old gencode override method removed in
    // https://github.com/protocolbuffers/protobuf/commit/7bff169d32710b143951ec6ce2c4ea9a56e2ad24
    public <T> BuilderT setExtension(
        final GeneratedMessage.GeneratedExtension<MessageT, T> extension, final T value) {
      return setExtension((ExtensionLite<MessageT, T>) extension, value);
    }

    // Support old gencode override method removed in
    // https://github.com/protocolbuffers/protobuf/commit/7bff169d32710b143951ec6ce2c4ea9a56e2ad24
    public <T> BuilderT setExtension(
        final GeneratedMessage.GeneratedExtension<MessageT, List<T>> extension,
        final int index,
        final T value) {
      return setExtension((ExtensionLite<MessageT, List<T>>) extension, index, value);
    }

    // Support old gencode override method removed in
    // https://github.com/protocolbuffers/protobuf/commit/7bff169d32710b143951ec6ce2c4ea9a56e2ad24
    public <T> BuilderT addExtension(
        final GeneratedMessage.GeneratedExtension<MessageT, List<T>> extension, final T value) {
      return addExtension((ExtensionLite<MessageT, List<T>>) extension, value);
    }

    // Support old gencode override method removed in
    // https://github.com/protocolbuffers/protobuf/commit/7bff169d32710b143951ec6ce2c4ea9a56e2ad24
    public <T> BuilderT clearExtension(
        final GeneratedMessage.GeneratedExtension<MessageT, T> extension) {
      return clearExtension((ExtensionLite<MessageT, T>) extension);
    }
  }

  @Deprecated
  public static final class FieldAccessorTable extends GeneratedMessage.FieldAccessorTable {
    public FieldAccessorTable(
        final Descriptor descriptor,
        final String[] camelCaseNames,
        final Class<? extends GeneratedMessage> messageClass,
        final Class<? extends Builder<?>> builderClass) {
        super(descriptor, camelCaseNames, messageClass, builderClass);
    }

    public FieldAccessorTable(final Descriptor descriptor, final String[] camelCaseNames) {
        super(descriptor, camelCaseNames);
    }

    @Override
    public FieldAccessorTable ensureFieldAccessorsInitialized(
        Class messageClass, Class builderClass) {
        return (FieldAccessorTable) super.ensureFieldAccessorsInitialized(messageClass, builderClass);
    }
  }
}
