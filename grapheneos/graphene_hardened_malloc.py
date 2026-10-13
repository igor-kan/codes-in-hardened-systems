"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 172."""

def spec_graphene_hardened_malloc_172() -> dict:
    return {"system": "GrapheneOS", "spec_id": 172, "quarantine_slabs": 13, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_172():
    s = spec_graphene_hardened_malloc_172()
    assert s["spec_id"] == 172
