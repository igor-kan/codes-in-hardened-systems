"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 166."""

def spec_graphene_hardened_malloc_166() -> dict:
    return {"system": "GrapheneOS", "spec_id": 166, "quarantine_slabs": 7, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_166():
    s = spec_graphene_hardened_malloc_166()
    assert s["spec_id"] == 166
